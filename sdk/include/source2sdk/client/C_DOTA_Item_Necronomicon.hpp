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
    class C_BaseEntity;
};

namespace source2sdk::client
{
    // Registered alignment: 0x8
    // Alignment: 0x8
    // Standard-layout class: false
    // Size: 0x6a8
    // Has VTable
    // Construct allowed
    // MClassHasEntityLimitedDataDesc
    #pragma pack(push, 1)
    class C_DOTA_Item_Necronomicon : public client::C_DOTA_Item
    {
    public:
        // m_hWarrior has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<client::C_BaseEntity> m_hWarrior;
        char m_hWarrior[0x4]; // 0x6a0        
        // m_hArcher has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<client::C_BaseEntity> m_hArcher;
        char m_hArcher[0x4]; // 0x6a4        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in C_DOTA_Item_Necronomicon because it is not a standard-layout class
    static_assert(sizeof(C_DOTA_Item_Necronomicon) == 0x6a8);
};
