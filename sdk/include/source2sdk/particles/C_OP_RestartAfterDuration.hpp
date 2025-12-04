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
        class C_OP_RestartAfterDuration : public source2sdk::particles::CParticleFunctionOperator
        {
        public:
            // metadata: MPropertyFriendlyName "minimum restart time"
            float m_flDurationMin; // 0x_            
            // metadata: MPropertyFriendlyName "maximum restart time"
            float m_flDurationMax; // 0x_            
            // metadata: MPropertyFriendlyName "control point to scale duration"
            std::int32_t m_nCP; // 0x_            
            // metadata: MPropertyFriendlyName "control point field X/Y/Z"
            // metadata: MPropertyAttributeChoiceName "vector_component"
            std::int32_t m_nCPField; // 0x_            
            // metadata: MPropertyFriendlyName "child group ID"
            std::int32_t m_nChildGroupID; // 0x_            
            // metadata: MPropertyFriendlyName "only restart children"
            bool m_bOnlyChildren; // 0x_            
            uint8_t _pad_[0x_];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in C_OP_RestartAfterDuration because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::particles::C_OP_RestartAfterDuration) == 0x_);
    };
};
