/* Generated by RuntimeBrowser
   Image: /usr/lib/libAWDSupportFramework.dylib
 */

@interface AWDPowerApMetrics : PBCodable <NSCopying> {
    struct { 
        unsigned int timestamp : 1; 
        unsigned int apAwakeDuration : 1; 
        unsigned int cpuPowerMicroWatt : 1; 
        unsigned int dramPowerMicroWatt : 1; 
        unsigned int gpuPowerMicroWatt : 1; 
        unsigned int socPowerMicroWatt : 1; 
    unsigned int _apAwakeDuration;
    unsigned int _cpuPowerMicroWatt;
    unsigned int _dramPowerMicroWatt;
    unsigned int _gpuPowerMicroWatt;
    } _has;
    unsigned int _socPowerMicroWatt;
    unsigned long long _timestamp;
}

@property unsigned int apAwakeDuration;
@property unsigned int cpuPowerMicroWatt;
@property unsigned int dramPowerMicroWatt;
@property unsigned int gpuPowerMicroWatt;
@property bool hasApAwakeDuration;
@property bool hasCpuPowerMicroWatt;
@property bool hasDramPowerMicroWatt;
@property bool hasGpuPowerMicroWatt;
@property bool hasSocPowerMicroWatt;
@property bool hasTimestamp;
@property unsigned int socPowerMicroWatt;
@property unsigned long long timestamp;

- (unsigned int)apAwakeDuration;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned int)cpuPowerMicroWatt;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned int)dramPowerMicroWatt;
- (unsigned int)gpuPowerMicroWatt;
- (bool)hasApAwakeDuration;
- (bool)hasCpuPowerMicroWatt;
- (bool)hasDramPowerMicroWatt;
- (bool)hasGpuPowerMicroWatt;
- (bool)hasSocPowerMicroWatt;
- (bool)hasTimestamp;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setApAwakeDuration:(unsigned int)arg1;
- (void)setCpuPowerMicroWatt:(unsigned int)arg1;
- (void)setDramPowerMicroWatt:(unsigned int)arg1;
- (void)setGpuPowerMicroWatt:(unsigned int)arg1;
- (void)setHasApAwakeDuration:(bool)arg1;
- (void)setHasCpuPowerMicroWatt:(bool)arg1;
- (void)setHasDramPowerMicroWatt:(bool)arg1;
- (void)setHasGpuPowerMicroWatt:(bool)arg1;
- (void)setHasSocPowerMicroWatt:(bool)arg1;
- (void)setHasTimestamp:(bool)arg1;
- (void)setSocPowerMicroWatt:(unsigned int)arg1;
- (void)setTimestamp:(unsigned long long)arg1;
- (unsigned int)socPowerMicroWatt;
- (unsigned long long)timestamp;
- (void)writeTo:(id)arg1;

@end
