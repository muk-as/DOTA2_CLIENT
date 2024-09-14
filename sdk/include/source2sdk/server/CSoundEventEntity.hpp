#pragma once
#include "source2sdk/entity2/CEntityIOOutput.hpp"
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
    // Registered alignment: 0x8
    // Alignment: 0x8
    // Standard-layout class: false
    // Size: 0x570
    // Has VTable
    // Construct allowed
    // MNetworkAssumeNotNetworkable
    #pragma pack(push, 1)
    class CSoundEventEntity : public server::CBaseEntity
    {
    public:
        bool m_bStartOnSpawn; // 0x4b8        
        bool m_bToLocalPlayer; // 0x4b9        
        bool m_bStopOnNew; // 0x4ba        
        bool m_bSaveRestore; // 0x4bb        
        bool m_bSavedIsPlaying; // 0x4bc        
        [[maybe_unused]] std::uint8_t pad_0x4bd[0x3]; // 0x4bd
        float m_flSavedElapsedTime; // 0x4c0        
        [[maybe_unused]] std::uint8_t pad_0x4c4[0x4]; // 0x4c4
        CUtlSymbolLarge m_iszSourceEntityName; // 0x4c8        
        CUtlSymbolLarge m_iszAttachmentName; // 0x4d0        
        // m_onGUIDChanged has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CEntityOutputTemplate<uint64_t> m_onGUIDChanged;
        char m_onGUIDChanged[0x28]; // 0x4d8        
        entity2::CEntityIOOutput m_onSoundFinished; // 0x500        
        float m_flClientCullRadius; // 0x528        
        [[maybe_unused]] std::uint8_t pad_0x52c[0x2c]; // 0x52c
        CUtlSymbolLarge m_iszSoundName; // 0x558        
        [[maybe_unused]] std::uint8_t pad_0x560[0x8]; // 0x560
        CEntityHandle m_hSource; // 0x568        
        int32_t m_nEntityIndexSelection; // 0x56c        
        
        // Datamap fields:
        // CUtlSymbolLarge InputSetSoundName; // 0x0
        // CUtlSymbolLarge InputSetSourceEntity; // 0x0
        // CUtlSymbolLarge InputStartSound; // 0x0
        // bool InputPauseSound; // 0x0
        // bool InputUnPauseSound; // 0x0
        // void InputStopSound; // 0x0
        // void m_nGUID; // 0x560
        // void CSoundEventEntitySoundFinishedThink; // 0x0
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CSoundEventEntity because it is not a standard-layout class
    static_assert(sizeof(CSoundEventEntity) == 0x570);
};
