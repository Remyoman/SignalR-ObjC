//
//  SRHubClientInvocation.h
//  SignalR
//
//  Created by Alex Billingsley on 11/7/11.
//  Copyright (c) 2011 DyKnow LLC. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface SRHubClientInvocation : NSObject

@property (strong, nonatomic, readwrite) NSString *hub;
@property (strong, nonatomic, readwrite) NSString *method;
@property (strong, nonatomic, readwrite) NSMutableArray *args;
@property (strong, nonatomic, readwrite) NSMutableDictionary *state;

- (id)initWithDictionary:(NSDictionary*)dict;
- (void)updateWithDictionary:(NSDictionary *)dict;
- (id)proxyForJson;

@end
