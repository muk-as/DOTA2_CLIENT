#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/animationsystem/ParticleAttachment_t.hpp"

// /////////////////////////////////////////////////////////////
// Module: particles
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace particles
    {
        // Registered alignment: 0x_
        // Alignment: 0x_
        // Standard-layout class: true
        // Size: 0x_
        // Construct allowed
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        struct ParticleControlPointDriver_t
        {
        public:
            ParticleParamID_t m_iControlPoint; // 0x_            
            source2sdk::animationsystem::ParticleAttachment_t m_iAttachType; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            CUtlString m_attachmentName; // 0x_            
            Vector m_vecOffset; // 0x_            
            QAngle m_angOffset; // 0x_            
            CUtlString m_entityName; // 0x_            
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::particles::ParticleControlPointDriver_t, m_iControlPoint) == 0x_);
        static_assert(offsetof(source2sdk::particles::ParticleControlPointDriver_t, m_iAttachType) == 0x_);
        static_assert(offsetof(source2sdk::particles::ParticleControlPointDriver_t, m_attachmentName) == 0x_);
        static_assert(offsetof(source2sdk::particles::ParticleControlPointDriver_t, m_vecOffset) == 0x_);
        static_assert(offsetof(source2sdk::particles::ParticleControlPointDriver_t, m_angOffset) == 0x_);
        static_assert(offsetof(source2sdk::particles::ParticleControlPointDriver_t, m_entityName) == 0x_);
        
        static_assert(sizeof(source2sdk::particles::ParticleControlPointDriver_t) == 0x_);
    };
};
