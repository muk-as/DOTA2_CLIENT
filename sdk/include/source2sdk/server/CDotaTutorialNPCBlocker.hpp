#pragma once
#include "source2sdk/server/CBaseEntity.hpp"
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
    class CDOTA_BaseNPC;
};

namespace source2sdk::server
{
    // Registered alignment: 0x8
    // Alignment: 0x8
    // Standard-layout class: false
    // Size: 0x4d0
    // Has VTable
    // Construct allowed
    // MNetworkAssumeNotNetworkable
    #pragma pack(push, 1)
    class CDotaTutorialNPCBlocker : public server::CBaseEntity
    {
    public:
        // m_hAura has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<server::CDOTA_BaseNPC> m_hAura;
        char m_hAura[0x4]; // 0x4b8        
        [[maybe_unused]] std::uint8_t pad_0x4bc[0x4]; // 0x4bc
        CUtlSymbolLarge m_iOtherBlockerName; // 0x4c0        
        // m_hOtherBlocker has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<server::CBaseEntity> m_hOtherBlocker;
        char m_hOtherBlocker[0x4]; // 0x4c8        
        bool m_bEndPoint; // 0x4cc        
        bool m_bEnabled; // 0x4cd        
        bool m_bStartDisabled; // 0x4ce        
        bool m_bHidden; // 0x4cf        
        
        // Datamap fields:
        // void InputEnable; // 0x0
        // void InputDisable; // 0x0
        // void InputToggle; // 0x0
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDotaTutorialNPCBlocker because it is not a standard-layout class
    static_assert(sizeof(CDotaTutorialNPCBlocker) == 0x4d0);
};
