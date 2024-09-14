#pragma once
#include "source2sdk/server/CDOTA_Modifier_Invisible.hpp"
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
    // Size: 0x1718
    // Has VTable
    // MNetworkAssumeNotNetworkable
    #pragma pack(push, 1)
    class CDOTA_Modifier_TemplarAssassin_Trap : public server::CDOTA_Modifier_Invisible
    {
    public:
        // m_vecTriggers has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<CHandle<server::CBaseEntity>> m_vecTriggers;
        char m_vecTriggers[0x18]; // 0x16f8        
        int32_t bonus_vision; // 0x1710        
        [[maybe_unused]] std::uint8_t pad_0x1714[0x4];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Modifier_TemplarAssassin_Trap because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Modifier_TemplarAssassin_Trap) == 0x1718);
};
