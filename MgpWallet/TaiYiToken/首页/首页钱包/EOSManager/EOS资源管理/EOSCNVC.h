//
//  EOSCNVC.h
//  TaiYiToken
//
//  Created by 张元一 on 2018/12/20.
//  Copyright © 2018 admin. All rights reserved.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface EOSCNVC : UIViewController
@property(nonatomic,strong)MissionWallet *wallet;
@property(nonatomic,strong)AccountInfo *eosAccountInfo;
@end

NS_ASSUME_NONNULL_END
