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
    class CDOTA_TempTree;
};

namespace source2sdk::server
{
    // Registered alignment: unknown
    // Alignment: unknown
    // Standard-layout class: false
    // Size: 0x1718
    // Has VTable
    #pragma pack(push, 1)
    class CDOTA_Modifier_Furion_Fecundity_TreeThinker : public client::CDOTA_Buff
    {
    public:
        // m_hTree has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<server::CDOTA_TempTree> m_hTree;
        char m_hTree[0x4]; // 0x1708        
        int32_t m_nFOWViewerTeam; // 0x170c        
        int32_t m_nFOWViewer; // 0x1710        
        [[maybe_unused]] std::uint8_t pad_0x1714[0x4];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Modifier_Furion_Fecundity_TreeThinker because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Modifier_Furion_Fecundity_TreeThinker) == 0x1718);
};
