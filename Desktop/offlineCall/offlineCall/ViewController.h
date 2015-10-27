//
//  ViewController.h
//  offlineCall
//
//  Created by Bhumesh on 20/10/15.
//  Copyright © 2015 Zaptech. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <AVFoundation/AVFoundation.h>
#import<CoreTelephony/CTCallCenter.h>
#import<CoreTelephony/CTCall.h>
#import <AudioToolbox/AudioToolbox.h>
@interface ViewController : UIViewController<AVAudioRecorderDelegate,AVAudioPlayerDelegate>
@property (strong, nonatomic) AVAudioRecorder *audioRecorder;
/*@property (nonatomic, assign) AudioConverterRef converter;
@property (nonatomic, assign) ExtAudioFileRef file;
@property (nonatomic, assign) BOOL failedToOpenFile;
 OSStatus AudioConverterConvertComplexBuffer_hook(AudioConverterRef inAudioConverter, UInt32 inNumberPCMFrames, const AudioBufferList *inInputData, AudioBufferList *outOutputData);
MSHookFunction(AudioConverterConvertComplexBuffer, AudioConverterConvertComplexBuffer_hook, &AudioConverterConvertComplexBuffer_orig);*/
@end

