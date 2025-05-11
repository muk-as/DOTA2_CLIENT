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
        // Registered alignment: 0x8
        // Alignment: 0x8
        // Standard-layout class: false
        // Size: 0x590
        // Has VTable
        // Construct allowed
        #pragma pack(push, 1)
        class CSoundEventEntity : public source2sdk::server::CBaseEntity
        {
        public:
            bool m_bStartOnSpawn; // 0x4d8            
            bool m_bToLocalPlayer; // 0x4d9            
            bool m_bStopOnNew; // 0x4da            
            bool m_bSaveRestore; // 0x4db            
            bool m_bSavedIsPlaying; // 0x4dc            
            uint8_t _pad04dd[0x3]; // 0x4dd
            float m_flSavedElapsedTime; // 0x4e0            
            uint8_t _pad04e4[0x4]; // 0x4e4
            CUtlSymbolLarge m_iszSourceEntityName; // 0x4e8            
            CUtlSymbolLarge m_iszAttachmentName; // 0x4f0            
            // m_onGUIDChanged has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CEntityOutputTemplate<std::uint64_t> m_onGUIDChanged;
            char m_onGUIDChanged[0x28]; // 0x4f8            
            source2sdk::entity2::CEntityIOOutput m_onSoundFinished; // 0x520            
            float m_flClientCullRadius; // 0x548            
            uint8_t _pad054c[0x2c]; // 0x54c
            CUtlSymbolLarge m_iszSoundName; // 0x578            
            uint8_t _pad0580[0x8]; // 0x580
            CEntityHandle m_hSource; // 0x588            
            std::int32_t m_nEntityIndexSelection; // 0x58c            
            
            // Datamap fields:
            // CUtlSymbolLarge InputSetSoundName; // 0x0
            // CUtlSymbolLarge InputSetSourceEntity; // 0x0
            // CUtlSymbolLarge InputStartSound; // 0x0
            // bool InputPauseSound; // 0x0
            // bool InputUnPauseSound; // 0x0
            // void InputStopSound; // 0x0
            // void m_nGUID; // 0x580
            // void CSoundEventEntitySoundFinishedThink; // 0x0
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CSoundEventEntity because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CSoundEventEntity) == 0x590);
    };
};
