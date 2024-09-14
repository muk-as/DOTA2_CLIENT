#pragma once
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
    class CBaseEntity;
};

namespace source2sdk::server
{
    // Registered alignment: 0x8
    // Alignment: 0x8
    // Standard-layout class: false
    // Size: 0x650
    // Has VTable
    // Construct allowed
    // MClassHasEntityLimitedDataDesc
    // MNetworkAssumeNotNetworkable
    #pragma pack(push, 1)
    class CDOTA_Item_Necronomicon : public server::CDOTA_Item
    {
    public:
        // m_hWarrior has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<server::CBaseEntity> m_hWarrior;
        char m_hWarrior[0x4]; // 0x648        
        // m_hArcher has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<server::CBaseEntity> m_hArcher;
        char m_hArcher[0x4]; // 0x64c        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Item_Necronomicon because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Item_Necronomicon) == 0x650);
};
