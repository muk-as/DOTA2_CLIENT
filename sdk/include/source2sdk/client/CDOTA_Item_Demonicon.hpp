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
    // Size: 0x690
    // Has VTable
    // Construct allowed
    // MClassHasEntityLimitedDataDesc
    // MNetworkAssumeNotNetworkable
    #pragma pack(push, 1)
    class CDOTA_Item_Demonicon : public client::C_DOTA_Item
    {
    public:
        // m_hDemonSummons has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<CHandle<client::C_BaseEntity>> m_hDemonSummons;
        char m_hDemonSummons[0x18]; // 0x678        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Item_Demonicon because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Item_Demonicon) == 0x690);
};
