#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/particles/CParticleFunctionOperator.hpp"

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
        // Standard-layout class: false
        // Size: 0x_
        // Has VTable
        // Construct allowed
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        class C_OP_SetControlPointsToModelParticles : public source2sdk::particles::CParticleFunctionOperator
        {
        public:
            // metadata: MPropertyFriendlyName "hitbox set"
            char m_HitboxSetName[128]; // 0x_            
            // metadata: MPropertyFriendlyName "attachment to follow"
            char m_AttachmentName[128]; // 0x_            
            // metadata: MPropertyFriendlyName "First control point to set"
            std::int32_t m_nFirstControlPoint; // 0x_            
            // metadata: MPropertyFriendlyName "# of control points to set"
            std::int32_t m_nNumControlPoints; // 0x_            
            // metadata: MPropertyFriendlyName "first particle to copy"
            std::int32_t m_nFirstSourcePoint; // 0x_            
            // metadata: MPropertyFriendlyName "use skinning instead of hitboxes"
            bool m_bSkin; // 0x_            
            // metadata: MPropertyFriendlyName "follow attachment"
            bool m_bAttachment; // 0x_            
            uint8_t _pad_[0x_];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in C_OP_SetControlPointsToModelParticles because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::particles::C_OP_SetControlPointsToModelParticles) == 0x_);
    };
};
