#pragma once
#include "source2sdk/entity2/GameTime_t.hpp"
#include "source2sdk/server/CDOTA_Item.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::server
{
    // Registered alignment: 0x8
    // Alignment: 0x8
    // Standard-layout class: false
    // Size: 0x680
    // Has VTable
    // Construct allowed
    // MClassHasEntityLimitedDataDesc
    // 
    // static metadata: MNetworkVarNames "int m_iStoredRuneType"
    #pragma pack(push, 1)
    class CDOTA_Item_Bottomless_Chalice : public server::CDOTA_Item
    {
    public:
        // metadata: MNetworkEnable
        // metadata: MNetworkChangeCallback "OnChaliceStoredRuneChanged"
        int32_t m_iStoredRuneType; // 0x670        
        entity2::GameTime_t m_fStoredRuneTime; // 0x674        
        float stored_rune_duration; // 0x678        
        [[maybe_unused]] std::uint8_t pad_0x67c[0x4];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Item_Bottomless_Chalice because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Item_Bottomless_Chalice) == 0x680);
};
