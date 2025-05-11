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
        // Registered alignment: 0x8
        // Alignment: 0x8
        // Standard-layout class: false
        // Size: 0x2d0
        // Has VTable
        // Construct allowed
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        class C_OP_SetControlPointsToModelParticles : public source2sdk::particles::CParticleFunctionOperator
        {
        public:
            // metadata: MPropertyFriendlyName "hitbox set"
            char m_HitboxSetName[128]; // 0x1c0            
            // metadata: MPropertyFriendlyName "attachment to follow"
            char m_AttachmentName[128]; // 0x240            
            // metadata: MPropertyFriendlyName "First control point to set"
            std::int32_t m_nFirstControlPoint; // 0x2c0            
            // metadata: MPropertyFriendlyName "# of control points to set"
            std::int32_t m_nNumControlPoints; // 0x2c4            
            // metadata: MPropertyFriendlyName "first particle to copy"
            std::int32_t m_nFirstSourcePoint; // 0x2c8            
            // metadata: MPropertyFriendlyName "use skinning instead of hitboxes"
            bool m_bSkin; // 0x2cc            
            // metadata: MPropertyFriendlyName "follow attachment"
            bool m_bAttachment; // 0x2cd            
            uint8_t _pad02ce[0x2];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in C_OP_SetControlPointsToModelParticles because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::particles::C_OP_SetControlPointsToModelParticles) == 0x2d0);
    };
};
