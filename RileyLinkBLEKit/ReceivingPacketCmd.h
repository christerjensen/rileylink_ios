//
//  ReceivingPacketCmd.h
//  RileyLink
//
//  Created by Pete Schwamb on 3/3/16.
//  Copyright © 2016 Pete Schwamb. All rights reserved.
//

@import Foundation;
#import "CmdBase.h"

@class RFPacket;

@interface ReceivingPacketCmd : CmdBase

@property (nonatomic, strong, nullable) RFPacket *receivedPacket;
@property (nonatomic, readonly) BOOL didReceiveResponse;
@property (nonatomic, readonly, nullable) NSData *rawReceivedData;

@end
