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
        // Size: 0x5a8
        // Has VTable
        // Construct allowed
        #pragma pack(push, 1)
        class CSoundEventEntity : public source2sdk::server::CBaseEntity
        {
        public:
            bool m_bStartOnSpawn; // 0x4e0            
            bool m_bToLocalPlayer; // 0x4e1            
            bool m_bStopOnNew; // 0x4e2            
            bool m_bSaveRestore; // 0x4e3            
            bool m_bSavedIsPlaying; // 0x4e4            
            uint8_t _pad04e5[0x3]; // 0x4e5
            float m_flSavedElapsedTime; // 0x4e8            
            uint8_t _pad04ec[0x4]; // 0x4ec
            CUtlSymbolLarge m_iszSourceEntityName; // 0x4f0            
            CUtlSymbolLarge m_iszAttachmentName; // 0x4f8            
            // m_onGUIDChanged has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CEntityOutputTemplate<std::uint64_t> m_onGUIDChanged;
            char m_onGUIDChanged[0x28]; // 0x500            
            source2sdk::entity2::CEntityIOOutput m_onSoundFinished; // 0x528            
            float m_flClientCullRadius; // 0x550            
            uint8_t _pad0554[0x2c]; // 0x554
            CUtlSymbolLarge m_iszSoundName; // 0x580            
            uint8_t _pad0588[0x14]; // 0x588
            CEntityHandle m_hSource; // 0x59c            
            std::int32_t m_nEntityIndexSelection; // 0x5a0            
            uint8_t _pad05a4[0x4];
            
            // Datamap fields:
            // CUtlSymbolLarge InputSetSoundName; // 0x0
            // CUtlSymbolLarge InputSetSourceEntity; // 0x0
            // CUtlSymbolLarge InputStartSound; // 0x0
            // bool InputPauseSound; // 0x0
            // bool InputUnPauseSound; // 0x0
            // void InputStopSound; // 0x0
            // void m_nGUID; // 0x588
            // void CSoundEventEntitySoundFinishedThink; // 0x0
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CSoundEventEntity because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CSoundEventEntity) == 0x5a8);
    };
};
