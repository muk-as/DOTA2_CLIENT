#pragma once
#include "source2sdk/client/CDOTA_Buff.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
    class C_DOTA_BaseNPC;
};

namespace source2sdk::client
{
    // Registered alignment: unknown
    // Alignment: unknown
    // Standard-layout class: false
    // Size: 0x1700
    // Has VTable
    // MNetworkAssumeNotNetworkable
    #pragma pack(push, 1)
    class CDOTA_Modifier_FacelessVoid_TimeLock_ForceProc : public client::CDOTA_Buff
    {
    public:
        float duration; // 0x16e8        
        float duration_creep; // 0x16ec        
        int32_t bonus_damage; // 0x16f0        
        float delay; // 0x16f4        
        // m_hTarget has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<client::C_DOTA_BaseNPC> m_hTarget;
        char m_hTarget[0x4]; // 0x16f8        
        [[maybe_unused]] std::uint8_t pad_0x16fc[0x4];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Modifier_FacelessVoid_TimeLock_ForceProc because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Modifier_FacelessVoid_TimeLock_ForceProc) == 0x1700);
};
