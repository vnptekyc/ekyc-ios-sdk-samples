//
//  ViewController.m
//  DemoSDKIntergrate
//
//  Created by Hung Nguyen  on 2/19/20.
//  Copyright © 2020 Hung Nguyen . All rights reserved.
//

#import "ViewController.h"
#import "FinalSDK/FinalSDK.h"
@interface ViewController ()

@end

@implementation ViewController

- (void)viewDidLoad {
    
  
    [super viewDidLoad];
    
//    dispatch_async(dispatch_get_main_queue(), ^{
//       // do work here
//
//        CameraViewController *objCamera = [CameraRouter createModule]  ;
//
//        objCamera.isVersion = VersionSdkPro;
//             objCamera.isShowResult = false;
//             objCamera.isType = typeCmt;
//             objCamera.isShowHelp = true;
//             objCamera.followType = FlowTypeFull;
//             objCamera.cameraDelegate = self;
//             objCamera.modalPresentationStyle = UIModalPresentationFullScreen;
//             [self presentViewController:objCamera animated:NO completion:^{}];
//    });
//
   
    
     // [self showFinalSDK];
    // Do any additional setup after loading the view.
}

- (IBAction)clickCMT:(id)sender {
    
    [self showFinalSDK:TypeDocumentCmt];
}


- (IBAction)clickPassport:(id)sender {
    
    [self showFinalSDK:TypeDocumentHochieu];
}

- (IBAction)clickDrive:(id)sender {
    
    [self showFinalSDK:TypeDocumentBanglaixe];
}

- (IBAction)clickCMTQD:(id)sender {
    
    [self showFinalSDK:TypeDocumentCmtquandoi];
}





-(void)showFinalSDK:(TypeDocument) typeDoc {
    
   CameraViewController *objCamera = (CameraViewController *)[CameraRouter createModule];
    objCamera.isVersion = VersionSdkPro;
    objCamera.flowType = FlowTypeFull;
    objCamera.isType = typeDoc;
    objCamera.cameraDelegate = self;
    objCamera.stepNow = ProgessStepStepFront;
          
          
    objCamera.unitCustomer = @"VNPTPAY";
    objCamera.challengeCode = @"INNOVATIONCENTER_IOS_PRO";
          
    objCamera.isShowResult = YES;
    objCamera.isShowHelp = YES;
    objCamera.isShowTrademark = YES; //
    objCamera.isCheckLivenessCard = YES; // "Không(cơ bản) && Có(nâng cao)"
    objCamera.isCheckMaskFace = YES; //
    objCamera.isAddFace = YES; //
    objCamera.languageApplication = @"vi";
    objCamera.modalPresentationStyle = UIModalPresentationOverFullScreen;
        
    [self showDetailViewController:objCamera sender:nil];
    
}



- (void)getResult {
   // NSLog(@"Thông tin mã hash ảnh %@ - %@ - %@",SaveData.shared.jsonCompareFace,SaveData.shared.jsonInfo,SaveData.shared.jsonLiveness);
}

- (void)kycNetworkDidCallApiWithDataWithParams:(id _Nonnull)params onSuccess:(void (^ _Nonnull)(id _Nonnull))success onFailure:(void (^ _Nonnull)(NSError * _Nullable, NSDictionary<NSString *,id> * _Nonnull))failure {
    printf(@"Chạy vào đây");
}



@end
