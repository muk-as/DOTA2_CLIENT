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
    // Size: 0x620
    // Has VTable
    // Construct allowed
    #pragma pack(push, 1)
    class C_SoundEventEntity : public client::C_BaseEntity
    {
    public:
        bool m_bStartOnSpawn; // 0x560        
        bool m_bToLocalPlayer; // 0x561        
        bool m_bStopOnNew; // 0x562        
        bool m_bSaveRestore; // 0x563        
        bool m_bSavedIsPlaying; // 0x564        
        [[maybe_unused]] std::uint8_t pad_0x565[0x3]; // 0x565
        float m_flSavedElapsedTime; // 0x568        
        [[maybe_unused]] std::uint8_t pad_0x56c[0x4]; // 0x56c
        CUtlSymbolLarge m_iszSourceEntityName; // 0x570        
        CUtlSymbolLarge m_iszAttachmentName; // 0x578        
        // m_onGUIDChanged has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CEntityOutputTemplate<uint64_t> m_onGUIDChanged;
        char m_onGUIDChanged[0x28]; // 0x580        
        entity2::CEntityIOOutput m_onSoundFinished; // 0x5a8        
        float m_flClientCullRadius; // 0x5d0        
        [[maybe_unused]] std::uint8_t pad_0x5d4[0x2c]; // 0x5d4
        CUtlSymbolLarge m_iszSoundName; // 0x600        
        [[maybe_unused]] std::uint8_t pad_0x608[0x8]; // 0x608
        CEntityHandle m_hSource; // 0x610        
        int32_t m_nEntityIndexSelection; // 0x614        
        // start of bitfield block at 0x618
        uint8_t m_bClientSideOnly: 1;
        // end of bitfield block // 1 bits
        [[maybe_unused]] std::uint8_t pad_0x619[0x7];
        
        // Datamap fields:
        // CUtlSymbolLarge InputSetSoundName; // 0x0
        // CUtlSymbolLarge InputSetSourceEntity; // 0x0
        // CUtlSymbolLarge InputStartSound; // 0x0
        // bool InputPauseSound; // 0x0
        // bool InputUnPauseSound; // 0x0
        // void InputStopSound; // 0x0
        // void m_nGUID; // 0x608
        // void C_SoundEventEntitySoundFinishedThink; // 0x0
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in C_SoundEventEntity because it is not a standard-layout class
    static_assert(sizeof(C_SoundEventEntity) == 0x620);
};
