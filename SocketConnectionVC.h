//
//  SocketConnectionVC.h
//  Airtime Challenge
//
//  Created by Dipankar Ghosh on 4/5/18.
//  Copyright © 2018 Dipankar Ghosh. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface SocketConnectionVC : UIViewController<NSStreamDelegate>
{
CFReadStreamRef readStream;
CFWriteStreamRef writeStream;

NSInputStream   *inputStream;
NSOutputStream  *outputStream;

NSMutableArray  *messages;
}

@property (weak, nonatomic) IBOutlet UITextField *ipAddressText;
@property (weak, nonatomic) IBOutlet UITextField *portText;
@property (weak, nonatomic) IBOutlet UITextField *dataToSendText;
@property (weak, nonatomic) IBOutlet UITextView *dataRecievedTextView;
@property (weak, nonatomic) IBOutlet UILabel *connectedLabel;

@end
