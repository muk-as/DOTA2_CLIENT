#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/server/CBaseEntity.hpp"
namespace source2sdk
{
    namespace server
    {
        struct CBaseEntity;
    };
};
namespace source2sdk
{
    namespace server
    {
        struct CDOTA_BaseNPC;
    };
};

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace server
    {
        // Registered alignment: 0x8
        // Alignment: 0x8
        // Standard-layout class: false
        // Size: 0x4f0
        // Has VTable
        // Construct allowed
        #pragma pack(push, 1)
        class CDotaTutorialNPCBlocker : public source2sdk::server::CBaseEntity
        {
        public:
            // m_hAura has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CDOTA_BaseNPC> m_hAura;
            char m_hAura[0x4]; // 0x4d8            
            uint8_t _pad04dc[0x4]; // 0x4dc
            CUtlSymbolLarge m_iOtherBlockerName; // 0x4e0            
            // m_hOtherBlocker has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CBaseEntity> m_hOtherBlocker;
            char m_hOtherBlocker[0x4]; // 0x4e8            
            bool m_bEndPoint; // 0x4ec            
            bool m_bEnabled; // 0x4ed            
            bool m_bStartDisabled; // 0x4ee            
            bool m_bHidden; // 0x4ef            
            
            // Datamap fields:
            // void InputEnable; // 0x0
            // void InputDisable; // 0x0
            // void InputToggle; // 0x0
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDotaTutorialNPCBlocker because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CDotaTutorialNPCBlocker) == 0x4f0);
    };
};
