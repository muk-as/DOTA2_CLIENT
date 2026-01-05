#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/entity2/CEntityIOOutput.hpp"
#include "source2sdk/server/CBaseEntity.hpp"

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
        class CEnvSoundscape : public source2sdk::server::CBaseEntity
        {
        public:
            source2sdk::entity2::CEntityIOOutput m_OnPlay; // 0x_            
            float m_flRadius; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            CUtlSymbolLarge m_soundEventName; // 0x_            
            bool m_bOverrideWithEvent; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            // metadata: MNotSaved
            std::int32_t m_soundscapeIndex; // 0x_            
            // metadata: MNotSaved
            std::int32_t m_soundscapeEntityListId; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            CUtlSymbolLarge m_positionNames[8]; // 0x_            
            // m_hProxySoundscape has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CEnvSoundscape> m_hProxySoundscape;
            char m_hProxySoundscape[0x_]; // 0x_            
            bool m_bDisabled; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            CUtlSymbolLarge m_soundscapeName; // 0x_            
            // metadata: MNotSaved
            std::uint32_t m_soundEventHash; // 0x_            
            uint8_t _pad_[0x_];
            
            // Datamap fields:
            // void InputEnable; // 0x_
            // void InputDisable; // 0x_
            // void InputToggleEnabled; // 0x_
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CEnvSoundscape because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CEnvSoundscape) == 0x_);
    };
};
