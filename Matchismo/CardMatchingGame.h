//
//  CardMatchingGame.h
//  Matchismo
//
//  Created by Paweł on 03/12/13.
//  Copyright (c) 2013 Twigit. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "Deck.h"
@interface CardMatchingGame : NSObject
// designed initializer
- (instancetype) initWithCardCount:(NSUInteger)count
                         usingDeck:(Deck *)deck;

@property (nonatomic, readonly) NSInteger score;

- (void) chooseCardAtIndex:(NSUInteger) index;

- (Card *) cardAtIndex: (NSUInteger) index;
@end
