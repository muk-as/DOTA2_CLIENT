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
    class CDOTA_Modifier_ChangeTreeModel_Thinker : public client::CDOTA_Buff
    {
    public:
        // m_hTree has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<server::CBaseEntity> m_hTree;
        char m_hTree[0x4]; // 0x1708        
        [[maybe_unused]] std::uint8_t pad_0x170c[0x4]; // 0x170c
        CUtlString m_strModel; // 0x1710        
        int32_t m_nModelChangeToken; // 0x1718        
        [[maybe_unused]] std::uint8_t pad_0x171c[0x4];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Modifier_ChangeTreeModel_Thinker because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Modifier_ChangeTreeModel_Thinker) == 0x1720);
};
