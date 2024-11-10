#pragma once
#include "source2sdk/client/CDOTA_Buff.hpp"
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
    // Registered alignment: unknown
    // Alignment: unknown
    // Standard-layout class: false
    // Size: 0x1720
    // Has VTable
    #pragma pack(push, 1)
    class CDOTA_Modifier_Courier_TakeStashItems : public client::CDOTA_Buff
    {
    public:
        // m_hStashOwner has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<server::CBaseEntity> m_hStashOwner;
        char m_hStashOwner[0x4]; // 0x1708        
        Vector m_vLocation; // 0x170c        
        bool m_bTransferAfterTake; // 0x1718        
        [[maybe_unused]] std::uint8_t pad_0x1719[0x3]; // 0x1719
        int32_t stash_pickup_distance; // 0x171c        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Modifier_Courier_TakeStashItems because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Modifier_Courier_TakeStashItems) == 0x1720);
};
