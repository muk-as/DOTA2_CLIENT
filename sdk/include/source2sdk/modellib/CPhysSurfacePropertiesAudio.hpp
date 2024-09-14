#pragma once
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: modellib
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::modellib
{
    // Registered alignment: 0x4
    // Alignment: 0x4
    // Standard-layout class: true
    // Size: 0x20
    // Has Trivial Destructor
    // Construct allowed
    // 
    // static metadata: MGetKV3ClassDefaults
    #pragma pack(push, 1)
    class CPhysSurfacePropertiesAudio
    {
    public:
        // metadata: MKV3TransferName "audioreflectivity"
        float m_reflectivity; // 0x0        
        // metadata: MKV3TransferName "audiohardnessfactor"
        float m_hardnessFactor; // 0x4        
        // metadata: MKV3TransferName "audioroughnessfactor"
        float m_roughnessFactor; // 0x8        
        // metadata: MKV3TransferName "scrapeRoughThreshold"
        float m_roughThreshold; // 0xc        
        // metadata: MKV3TransferName "impactHardThreshold"
        float m_hardThreshold; // 0x10        
        // metadata: MKV3TransferName "audioHardMinVelocity"
        float m_hardVelocityThreshold; // 0x14        
        // metadata: MKV3TransferName "staticImpactVolume"
        float m_flStaticImpactVolume; // 0x18        
        // metadata: MKV3TransferName "occlusionFactor"
        float m_flOcclusionFactor; // 0x1c        
    };
    #pragma pack(pop)
    
    static_assert(offsetof(CPhysSurfacePropertiesAudio, m_reflectivity) == 0x0);
    static_assert(offsetof(CPhysSurfacePropertiesAudio, m_hardnessFactor) == 0x4);
    static_assert(offsetof(CPhysSurfacePropertiesAudio, m_roughnessFactor) == 0x8);
    static_assert(offsetof(CPhysSurfacePropertiesAudio, m_roughThreshold) == 0xc);
    static_assert(offsetof(CPhysSurfacePropertiesAudio, m_hardThreshold) == 0x10);
    static_assert(offsetof(CPhysSurfacePropertiesAudio, m_hardVelocityThreshold) == 0x14);
    static_assert(offsetof(CPhysSurfacePropertiesAudio, m_flStaticImpactVolume) == 0x18);
    static_assert(offsetof(CPhysSurfacePropertiesAudio, m_flOcclusionFactor) == 0x1c);
    
    static_assert(sizeof(CPhysSurfacePropertiesAudio) == 0x20);
};
