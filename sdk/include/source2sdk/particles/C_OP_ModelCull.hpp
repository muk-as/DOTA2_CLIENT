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
        // Size: 0x248
        // Has VTable
        // Construct allowed
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        class C_OP_ModelCull : public source2sdk::particles::CParticleFunctionOperator
        {
        public:
            // metadata: MPropertyFriendlyName "control point number"
            std::int32_t m_nControlPointNumber; // 0x1c0            
            // metadata: MPropertyFriendlyName "use only bounding box"
            bool m_bBoundBox; // 0x1c4            
            // metadata: MPropertyFriendlyName "cull outside instead of inside"
            bool m_bCullOutside; // 0x1c5            
            // metadata: MPropertyFriendlyName "use bones instead of hitboxes"
            bool m_bUseBones; // 0x1c6            
            // metadata: MPropertyFriendlyName "hitbox set"
            char m_HitboxSetName[128]; // 0x1c7            
            uint8_t _pad0247[0x1];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in C_OP_ModelCull because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::particles::C_OP_ModelCull) == 0x248);
    };
};
