#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/entity2/CNetworkVarChainer.hpp"

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace client
    {
        // Registered alignment: unknown
        // Alignment: 0x_
        // Standard-layout class: true
        // Size: 0x_
        // Has VTable
        // MConstructibleClassBase
        #pragma pack(push, 1)
        class CDOTA_ArcanaDataEntity_Base
        {
        public:
            uint8_t _pad_[0x_]; // 0x_
            // metadata: MNotSaved
            source2sdk::entity2::CNetworkVarChainer __m_pChainEntity; // 0x_            
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::client::CDOTA_ArcanaDataEntity_Base, __m_pChainEntity) == 0x_);
        
        static_assert(sizeof(source2sdk::client::CDOTA_ArcanaDataEntity_Base) == 0x_);
    };
};
