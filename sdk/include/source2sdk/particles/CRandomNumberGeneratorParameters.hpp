#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: particles
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace particles
    {
        // Registered alignment: 0x4
        // Alignment: 0x4
        // Standard-layout class: true
        // Size: 0x8
        // Has Trivial Destructor
        // Construct allowed
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        class CRandomNumberGeneratorParameters
        {
        public:
            // metadata: MPropertyFriendlyName "Distribute evenly"
            bool m_bDistributeEvenly; // 0x0            
            uint8_t _pad0001[0x3]; // 0x1
            // metadata: MPropertyFriendlyName "Seed (negative values=randomize)"
            // metadata: MPropertySuppressExpr "!m_bDistributeEvenly"
            std::int32_t m_nSeed; // 0x4            
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::particles::CRandomNumberGeneratorParameters, m_bDistributeEvenly) == 0x0);
        static_assert(offsetof(source2sdk::particles::CRandomNumberGeneratorParameters, m_nSeed) == 0x4);
        
        static_assert(sizeof(source2sdk::particles::CRandomNumberGeneratorParameters) == 0x8);
    };
};
