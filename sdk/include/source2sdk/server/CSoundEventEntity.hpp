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
        class CSoundEventEntity : public source2sdk::server::CBaseEntity
        {
        public:
            bool m_bStartOnSpawn; // 0x_            
            bool m_bToLocalPlayer; // 0x_            
            bool m_bStopOnNew; // 0x_            
            bool m_bSaveRestore; // 0x_            
            bool m_bSavedIsPlaying; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            float m_flSavedElapsedTime; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            CUtlSymbolLarge m_iszSourceEntityName; // 0x_            
            CUtlSymbolLarge m_iszAttachmentName; // 0x_            
            // m_onGUIDChanged has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CEntityOutputTemplate<std::uint64_t> m_onGUIDChanged;
            char m_onGUIDChanged[0x_]; // 0x_            
            source2sdk::entity2::CEntityIOOutput m_onSoundFinished; // 0x_            
            float m_flClientCullRadius; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            CUtlSymbolLarge m_iszSoundName; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            CEntityHandle m_hSource; // 0x_            
            std::int32_t m_nEntityIndexSelection; // 0x_            
            uint8_t _pad_[0x_];
            
            // Datamap fields:
            // CUtlSymbolLarge InputSetSoundName; // 0x_
            // CUtlSymbolLarge InputSetSourceEntity; // 0x_
            // CUtlSymbolLarge InputStartSoundOnAllClients; // 0x_
            // int32_t InputStartSoundOnSingleClient; // 0x_
            // bool InputPauseSound; // 0x_
            // bool InputUnPauseSound; // 0x_
            // void InputStopSound; // 0x_
            // void m_nGUID; // 0x_
            // void CSoundEventEntitySoundFinishedThink; // 0x_
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CSoundEventEntity because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CSoundEventEntity) == 0x_);
    };
};
