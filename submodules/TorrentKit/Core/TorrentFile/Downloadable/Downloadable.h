//
//  Downloadable.h
//  TorrentKit
//
//  Created by Даниил Виноградов on 24.04.2022.
//

#import <Foundation/Foundation.h>

#import "TorrentHandle.h"

NS_ASSUME_NONNULL_BEGIN

@class Session;
@protocol Downloadable <NSObject>

- (void)configureAddTorrentParams:(void *)params forSession:(Session *)session;
- (void)configureAfterAdded:(TorrentHandle *)torrentHandle;

@end

NS_ASSUME_NONNULL_END