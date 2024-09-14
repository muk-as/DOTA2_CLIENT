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
    // Size: 0x1708
    // Has VTable
    // MNetworkAssumeNotNetworkable
    #pragma pack(push, 1)
    class CDOTA_Modifier_Mars_ArenaOfBlood_SelfLeash : public client::CDOTA_Buff
    {
    public:
        int32_t radius; // 0x16e8        
        float width; // 0x16ec        
        bool m_bLeashed; // 0x16f0        
        [[maybe_unused]] std::uint8_t pad_0x16f1[0x7]; // 0x16f1
        // m_hThinker has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<server::CBaseEntity> m_hThinker;
        char m_hThinker[0x4]; // 0x16f8        
        Vector m_vOriginLoc; // 0x16fc        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Modifier_Mars_ArenaOfBlood_SelfLeash because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Modifier_Mars_ArenaOfBlood_SelfLeash) == 0x1708);
};
