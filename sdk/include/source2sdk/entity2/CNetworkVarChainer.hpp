#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/networksystem/ChangeAccessorFieldPathIndex_t.hpp"

// /////////////////////////////////////////////////////////////
// Module: entity2
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace entity2
    {
        // Registered alignment: unknown
        // Alignment: 0x_
        // Standard-layout class: true
        // Size: 0x_
        #pragma pack(push, 1)
        class CNetworkVarChainer
        {
        public:
            uint8_t _pad_[0x_]; // 0x_
            source2sdk::networksystem::ChangeAccessorFieldPathIndex_t m_PathIndex; // 0x_            
            uint8_t _pad_[0x_];
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::entity2::CNetworkVarChainer, m_PathIndex) == 0x_);
        
        static_assert(sizeof(source2sdk::entity2::CNetworkVarChainer) == 0x_);
    };
};
