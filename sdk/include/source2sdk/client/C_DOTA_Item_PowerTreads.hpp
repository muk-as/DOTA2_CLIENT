#pragma once
#include "source2sdk/client/C_DOTA_Item.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
    // Registered alignment: 0x8
    // Alignment: 0x8
    // Standard-layout class: false
    // Size: 0x6a8
    // Has VTable
    // Construct allowed
    // MClassHasEntityLimitedDataDesc
    // 
    // static metadata: MNetworkVarNames "int m_iStat"
    #pragma pack(push, 1)
    class C_DOTA_Item_PowerTreads : public client::C_DOTA_Item
    {
    public:
        // metadata: MNetworkEnable
        // metadata: MNetworkChangeCallback "OnPowerTreadsStatChanged"
        int32_t m_iStat; // 0x6a0        
        [[maybe_unused]] std::uint8_t pad_0x6a4[0x4];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in C_DOTA_Item_PowerTreads because it is not a standard-layout class
    static_assert(sizeof(C_DOTA_Item_PowerTreads) == 0x6a8);
};
