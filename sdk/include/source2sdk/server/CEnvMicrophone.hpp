#pragma once
#include "source2sdk/entity2/CEntityIOOutput.hpp"
#include "source2sdk/server/CPointEntity.hpp"
#include "source2sdk/server/SoundFlags_t.hpp"
#include "source2sdk/server/SoundTypes_t.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::server
{
    class CBaseEntity;
};

namespace source2sdk::server
{
    class CBaseFilter;
};

namespace source2sdk::server
{
    // Registered alignment: 0x8
    // Alignment: 0x8
    // Standard-layout class: false
    // Size: 0x678
    // Has VTable
    // Construct allowed
    // MNetworkAssumeNotNetworkable
    #pragma pack(push, 1)
    class CEnvMicrophone : public server::CPointEntity
    {
    public:
        bool m_bDisabled; // 0x4b8        
        [[maybe_unused]] std::uint8_t pad_0x4b9[0x3]; // 0x4b9
        // m_hMeasureTarget has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<server::CBaseEntity> m_hMeasureTarget;
        char m_hMeasureTarget[0x4]; // 0x4bc        
        server::SoundTypes_t m_nSoundType; // 0x4c0        
        server::SoundFlags_t m_nSoundFlags; // 0x4c2        
        float m_flSensitivity; // 0x4c4        
        float m_flSmoothFactor; // 0x4c8        
        float m_flMaxRange; // 0x4cc        
        CUtlSymbolLarge m_iszSpeakerName; // 0x4d0        
        // m_hSpeaker has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<server::CBaseEntity> m_hSpeaker;
        char m_hSpeaker[0x4]; // 0x4d8        
        bool m_bAvoidFeedback; // 0x4dc        
        [[maybe_unused]] std::uint8_t pad_0x4dd[0x3]; // 0x4dd
        int32_t m_iSpeakerDSPPreset; // 0x4e0        
        [[maybe_unused]] std::uint8_t pad_0x4e4[0x4]; // 0x4e4
        CUtlSymbolLarge m_iszListenFilter; // 0x4e8        
        // m_hListenFilter has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<server::CBaseFilter> m_hListenFilter;
        char m_hListenFilter[0x4]; // 0x4f0        
        [[maybe_unused]] std::uint8_t pad_0x4f4[0x4]; // 0x4f4
        // m_SoundLevel has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CEntityOutputTemplate<float> m_SoundLevel;
        char m_SoundLevel[0x28]; // 0x4f8        
        entity2::CEntityIOOutput m_OnRoutedSound; // 0x520        
        entity2::CEntityIOOutput m_OnHeardSound; // 0x548        
        char m_szLastSound[256]; // 0x570        
        int32_t m_iLastRoutedFrame; // 0x670        
        [[maybe_unused]] std::uint8_t pad_0x674[0x4];
        
        // Datamap fields:
        // void InputEnable; // 0x0
        // void InputDisable; // 0x0
        // CUtlSymbolLarge InputSetSpeakerName; // 0x0
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CEnvMicrophone because it is not a standard-layout class
    static_assert(sizeof(CEnvMicrophone) == 0x678);
};
