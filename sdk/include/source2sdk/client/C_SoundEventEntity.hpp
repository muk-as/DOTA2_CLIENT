#pragma once
#include "source2sdk/client/C_BaseEntity.hpp"
#include "source2sdk/entity2/CEntityIOOutput.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
    // Registered alignment: 0x8
    // Alignment: 0x8
    // Standard-layout class: false
    // Size: 0x5f8
    // Has VTable
    // Construct allowed
    // MNetworkAssumeNotNetworkable
    #pragma pack(push, 1)
    class C_SoundEventEntity : public client::C_BaseEntity
    {
    public:
        bool m_bStartOnSpawn; // 0x538        
        bool m_bToLocalPlayer; // 0x539        
        bool m_bStopOnNew; // 0x53a        
        bool m_bSaveRestore; // 0x53b        
        bool m_bSavedIsPlaying; // 0x53c        
        [[maybe_unused]] std::uint8_t pad_0x53d[0x3]; // 0x53d
        float m_flSavedElapsedTime; // 0x540        
        [[maybe_unused]] std::uint8_t pad_0x544[0x4]; // 0x544
        CUtlSymbolLarge m_iszSourceEntityName; // 0x548        
        CUtlSymbolLarge m_iszAttachmentName; // 0x550        
        // m_onGUIDChanged has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CEntityOutputTemplate<uint64_t> m_onGUIDChanged;
        char m_onGUIDChanged[0x28]; // 0x558        
        entity2::CEntityIOOutput m_onSoundFinished; // 0x580        
        float m_flClientCullRadius; // 0x5a8        
        [[maybe_unused]] std::uint8_t pad_0x5ac[0x2c]; // 0x5ac
        CUtlSymbolLarge m_iszSoundName; // 0x5d8        
        [[maybe_unused]] std::uint8_t pad_0x5e0[0x8]; // 0x5e0
        CEntityHandle m_hSource; // 0x5e8        
        int32_t m_nEntityIndexSelection; // 0x5ec        
        // start of bitfield block at 0x5f0
        uint8_t m_bClientSideOnly: 1;
        // end of bitfield block // 1 bits
        [[maybe_unused]] std::uint8_t pad_0x5f1[0x7];
        
        // Datamap fields:
        // CUtlSymbolLarge InputSetSoundName; // 0x0
        // CUtlSymbolLarge InputSetSourceEntity; // 0x0
        // CUtlSymbolLarge InputStartSound; // 0x0
        // bool InputPauseSound; // 0x0
        // bool InputUnPauseSound; // 0x0
        // void InputStopSound; // 0x0
        // void m_nGUID; // 0x5e0
        // void C_SoundEventEntitySoundFinishedThink; // 0x0
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in C_SoundEventEntity because it is not a standard-layout class
    static_assert(sizeof(C_SoundEventEntity) == 0x5f8);
};
