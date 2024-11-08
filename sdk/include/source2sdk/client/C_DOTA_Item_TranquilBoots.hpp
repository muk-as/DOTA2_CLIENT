#pragma once
#include "source2sdk/client/C_DOTA_Item.hpp"
#include "source2sdk/entity2/GameTime_t.hpp"
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
    // Size: 0x6c0
    // Has VTable
    // Construct allowed
    // MClassHasEntityLimitedDataDesc
    #pragma pack(push, 1)
    class C_DOTA_Item_TranquilBoots : public client::C_DOTA_Item
    {
    public:
        int32_t break_count; // 0x6a0        
        [[maybe_unused]] std::uint8_t pad_0x6a4[0x4]; // 0x6a4
        // m_DamageList has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<entity2::GameTime_t> m_DamageList;
        char m_DamageList[0x18]; // 0x6a8        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in C_DOTA_Item_TranquilBoots because it is not a standard-layout class
    static_assert(sizeof(C_DOTA_Item_TranquilBoots) == 0x6c0);
};
