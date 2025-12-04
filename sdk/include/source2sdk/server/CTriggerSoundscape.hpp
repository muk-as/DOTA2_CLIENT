#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/server/CBaseTrigger.hpp"
namespace source2sdk
{
    namespace server
    {
        struct CBasePlayerPawn;
    };
};
namespace source2sdk
{
    namespace server
    {
        struct CEnvSoundscapeTriggerable;
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
        // Registered alignment: 0x_
        // Alignment: 0x_
        // Standard-layout class: false
        // Size: 0x_
        // Has VTable
        // Construct allowed
        #pragma pack(push, 1)
        class CTriggerSoundscape : public source2sdk::server::CBaseTrigger
        {
        public:
            // m_hSoundscape has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CEnvSoundscapeTriggerable> m_hSoundscape;
            char m_hSoundscape[0x_]; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            CUtlSymbolLarge m_SoundscapeName; // 0x_            
            // m_spectators has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<CHandle<source2sdk::server::CBasePlayerPawn>> m_spectators;
            char m_spectators[0x_]; // 0x_            
            
            // Datamap fields:
            // void CTriggerSoundscapePlayerUpdateThink; // 0x_
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CTriggerSoundscape because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CTriggerSoundscape) == 0x_);
    };
};
