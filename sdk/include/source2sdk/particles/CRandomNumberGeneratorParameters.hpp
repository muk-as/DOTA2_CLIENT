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
        // Registered alignment: 0x_
        // Alignment: 0x_
        // Standard-layout class: true
        // Size: 0x_
        // Has Trivial Destructor
        // Construct allowed
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        class CRandomNumberGeneratorParameters
        {
        public:
            // metadata: MPropertyFriendlyName "Distribute evenly"
            bool m_bDistributeEvenly; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            // metadata: MPropertyFriendlyName "Seed (negative values=randomize)"
            // metadata: MPropertySuppressExpr "!m_bDistributeEvenly"
            std::int32_t m_nSeed; // 0x_            
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::particles::CRandomNumberGeneratorParameters, m_bDistributeEvenly) == 0x_);
        static_assert(offsetof(source2sdk::particles::CRandomNumberGeneratorParameters, m_nSeed) == 0x_);
        
        static_assert(sizeof(source2sdk::particles::CRandomNumberGeneratorParameters) == 0x_);
    };
};
