#import <Foundation/Foundation.h>
#import "PBTRandom.h"


@interface PBTConstantRandom : NSObject<PBTRandom>

- (instancetype)init;
- (instancetype)initWithDoubleValue:(double)doubleValue;

@end
