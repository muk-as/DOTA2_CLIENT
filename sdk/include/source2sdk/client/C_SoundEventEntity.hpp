#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/C_BaseEntity.hpp"
#include "source2sdk/entity2/CEntityIOOutput.hpp"

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace client
    {
        // Registered alignment: 0x8
        // Alignment: 0x8
        // Standard-layout class: false
        // Size: 0x5d0
        // Has VTable
        // Construct allowed
        #pragma pack(push, 1)
        class C_SoundEventEntity : public source2sdk::client::C_BaseEntity
        {
        public:
            bool m_bStartOnSpawn; // 0x510            
            bool m_bToLocalPlayer; // 0x511            
            bool m_bStopOnNew; // 0x512            
            bool m_bSaveRestore; // 0x513            
            bool m_bSavedIsPlaying; // 0x514            
            uint8_t _pad0515[0x3]; // 0x515
            float m_flSavedElapsedTime; // 0x518            
            uint8_t _pad051c[0x4]; // 0x51c
            CUtlSymbolLarge m_iszSourceEntityName; // 0x520            
            CUtlSymbolLarge m_iszAttachmentName; // 0x528            
            // m_onGUIDChanged has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CEntityOutputTemplate<std::uint64_t> m_onGUIDChanged;
            char m_onGUIDChanged[0x28]; // 0x530            
            source2sdk::entity2::CEntityIOOutput m_onSoundFinished; // 0x558            
            float m_flClientCullRadius; // 0x580            
            uint8_t _pad0584[0x2c]; // 0x584
            CUtlSymbolLarge m_iszSoundName; // 0x5b0            
            uint8_t _pad05b8[0x8]; // 0x5b8
            CEntityHandle m_hSource; // 0x5c0            
            std::int32_t m_nEntityIndexSelection; // 0x5c4            
            // start of bitfield block
            uint8_t m_bClientSideOnly: 1;
            // end of bitfield block// 1 bits
            uint8_t _pad05c9[0x7];
            
            // Datamap fields:
            // CUtlSymbolLarge InputSetSoundName; // 0x0
            // CUtlSymbolLarge InputSetSourceEntity; // 0x0
            // CUtlSymbolLarge InputStartSound; // 0x0
            // bool InputPauseSound; // 0x0
            // bool InputUnPauseSound; // 0x0
            // void InputStopSound; // 0x0
            // void m_nGUID; // 0x5b8
            // void C_SoundEventEntitySoundFinishedThink; // 0x0
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in C_SoundEventEntity because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::C_SoundEventEntity) == 0x5d0);
    };
};
