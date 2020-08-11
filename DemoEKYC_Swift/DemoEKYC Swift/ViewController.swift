//
//  ViewController.swift
//  DemoEKYC Swift
//
//  Created by Nguyen Duy Hung on 4/1/20.
//  Copyright © 2020 Nguyen Duy Hung. All rights reserved.
//

import UIKit
import FinalSDK
class ViewController: UIViewController, CameraDelegate {
    func kycNetworkDidCallApiWithData(params: Any, onSuccess success: @escaping (Any) -> Void, onFailure failure: @escaping (Error?, [String : Any]) -> Void) {
        print("chay vào dây");
    }
    
    func getResult() {
        print("Chay vao day");
        
        
//        DispatchQueue.main.async {
//             let strData = " \(SaveData.shared.jsonInfo)  \(SaveData.shared.jsonAddFace)  \(SaveData.shared.jsonScanFace) \(SaveData.shared.jsonScanFace)"
//                
//                   
//                   
//                   let alertController = UIAlertController(title: "Alert", message: strData, preferredStyle: .alert)
//                           
//                  let action1 = UIAlertAction(title: "Close", style: .default) { (action:UIAlertAction) in
//                    self.dismiss(animated: true, completion: nil)
//                  }
//            
//            alertController.addAction(action1)
//                   self.present(alertController, animated: true, completion: nil)
//        }
//     
        
        
        
    }
    

    override func viewDidLoad() {
        super.viewDidLoad()
    
        // Do any additional setup after loading the view.
    }


    @IBAction func clickCMT(_ sender: Any) {
        showPro(type: .cmt)
    }
    
    @IBAction func clickPassport(_ sender: Any) {
        showPro(type:.hochieu)
    }
    
    @IBAction func clickBLX(_ sender: Any) {
        showPro(type: .banglaixe)
    }
    
    @IBAction func clickCMTQD(_ sender: Any) {
        showPro(type: .cmtquandoi)
        
    }
    
    
    func showPro(type:TypeDocument) {
        
        if !Reachability.isConnectedToNetwork() {
            Toast.showErr("Không có kết nối mạng. Vui lòng kiểm tra lại kết nối")
            return
        }
        
        let objCamera = CameraRouter.createModule() as! CameraViewController
        objCamera.isVersion = .pro
        objCamera.flowType = .full
        objCamera.isType = type
        objCamera.cameraDelegate = self
        objCamera.stepNow = .stepFront
        
        objCamera.arrayItemPostCode = [] as Array<PostCodeType>
        
        objCamera.unitCustomer = "VNPTPAY"
        objCamera.challengeCode = "INNOVATIONCENTER_IOS_PRO"
        
        objCamera.isShowResult = true
        objCamera.isShowHelp = true
        objCamera.isShowTrademark = true //
        objCamera.isCheckLivenessCard = true // "Không(cơ bản) && Có(nâng cao)"
        objCamera.isCheckMaskFace = true //
        objCamera.isAddFace = true //
        objCamera.languageApplication = "vi"
        
        // objCamera.logoTrademarkName = "logo_vietcombank"
        
        objCamera.modalPresentationStyle = .fullScreen
        self.showDetailViewController(objCamera, sender: nil)
    }
    
    
    
    
    
}

