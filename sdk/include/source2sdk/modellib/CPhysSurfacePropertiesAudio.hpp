#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: modellib
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace modellib
    {
        // Registered alignment: 0x_
        // Alignment: 0x_
        // Standard-layout class: true
        // Size: 0x_
        // Has Trivial Destructor
        // Construct allowed
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        class CPhysSurfacePropertiesAudio
        {
        public:
            // metadata: MKV3TransferName "audioreflectivity"
            float m_reflectivity; // 0x_            
            // metadata: MKV3TransferName "audiohardnessfactor"
            float m_hardnessFactor; // 0x_            
            // metadata: MKV3TransferName "audioroughnessfactor"
            float m_roughnessFactor; // 0x_            
            // metadata: MKV3TransferName "scrapeRoughThreshold"
            float m_roughThreshold; // 0x_            
            // metadata: MKV3TransferName "impactHardThreshold"
            float m_hardThreshold; // 0x_            
            // metadata: MKV3TransferName "audioHardMinVelocity"
            float m_hardVelocityThreshold; // 0x_            
            // metadata: MKV3TransferName "staticImpactVolume"
            float m_flStaticImpactVolume; // 0x_            
            // metadata: MKV3TransferName "occlusionFactor"
            float m_flOcclusionFactor; // 0x_            
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::modellib::CPhysSurfacePropertiesAudio, m_reflectivity) == 0x_);
        static_assert(offsetof(source2sdk::modellib::CPhysSurfacePropertiesAudio, m_hardnessFactor) == 0x_);
        static_assert(offsetof(source2sdk::modellib::CPhysSurfacePropertiesAudio, m_roughnessFactor) == 0x_);
        static_assert(offsetof(source2sdk::modellib::CPhysSurfacePropertiesAudio, m_roughThreshold) == 0x_);
        static_assert(offsetof(source2sdk::modellib::CPhysSurfacePropertiesAudio, m_hardThreshold) == 0x_);
        static_assert(offsetof(source2sdk::modellib::CPhysSurfacePropertiesAudio, m_hardVelocityThreshold) == 0x_);
        static_assert(offsetof(source2sdk::modellib::CPhysSurfacePropertiesAudio, m_flStaticImpactVolume) == 0x_);
        static_assert(offsetof(source2sdk::modellib::CPhysSurfacePropertiesAudio, m_flOcclusionFactor) == 0x_);
        
        static_assert(sizeof(source2sdk::modellib::CPhysSurfacePropertiesAudio) == 0x_);
    };
};
