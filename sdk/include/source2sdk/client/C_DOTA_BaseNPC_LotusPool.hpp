#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/C_DOTA_BaseNPC_Building.hpp"

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace client
    {
        // Registered alignment: 0x8
        // Alignment: 0x8
        // Standard-layout class: false
        // Size: 0x1a88
        // Has VTable
        // Construct allowed
        // MClassHasEntityLimitedDataDesc
        #pragma pack(push, 1)
        class C_DOTA_BaseNPC_LotusPool : public source2sdk::client::C_DOTA_BaseNPC_Building
        {
        public:
            std::int32_t m_nLotusCount; // 0x1a70            
            std::int32_t m_nIntervals; // 0x1a74            
            std::int32_t m_nLotusSeconds; // 0x1a78            
            std::int32_t m_nLotusMax; // 0x1a7c            
            bool m_bInVision; // 0x1a80            
            uint8_t _pad1a81[0x7];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in C_DOTA_BaseNPC_LotusPool because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::C_DOTA_BaseNPC_LotusPool) == 0x1a88);
    };
};
