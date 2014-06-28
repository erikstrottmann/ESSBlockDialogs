//
//  ESSBlockActionSheet.h
//  ESSBlockActionSheet
//
//  Created by Erik Strottmann on 6/27/14.
//  Copyright (c) 2014 Gr8Privacy. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "ESSBlockActionItem.h"

@interface ESSBlockActionSheet : UIActionSheet <UIActionSheetDelegate>

/**
 * Initialize an action sheet with no title or buttons, as its own delegate.
 */
- (instancetype)init;
/**
 * Initialize an action sheet with an NSArray of other button items.
 */
- (instancetype)initWithTitle:(NSString *)title
             cancelButtonItem:(ESSBlockActionItem *)cancelButtonItem
        destructiveButtonItem:(ESSBlockActionItem *)destructiveButtonItem
             otherButtonItems:(NSArray *)otherButtonItems;
/**
 * Initialize an action sheet with a variable argument list of other button items.
 */
- (instancetype)initWithTitle:(NSString *)title
             cancelButtonItem:(ESSBlockActionItem *)cancelButtonItem
        destructiveButtonItem:(ESSBlockActionItem *)destructiveButtonItem
             otherButtonItemList:(ESSBlockActionItem *)firstOtherButtonItem, ... NS_REQUIRES_NIL_TERMINATION;

- (void)addButtonWithItem:(ESSBlockActionItem *)item;
- (void)addCancelButtonWithItem:(ESSBlockActionItem *)item;
- (void)addDestructiveButtonWithItem:(ESSBlockActionItem *)item;

@end
