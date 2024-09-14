#pragma once
#include "source2sdk/entity2/GameTime_t.hpp"
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
    class CDOTAPlayerController;
};

namespace source2sdk::server
{
    class CDOTA_BaseNPC;
};

namespace source2sdk::server
{
    // Registered alignment: 0x8
    // Alignment: 0x8
    // Standard-layout class: false
    // Size: 0x4c8
    // Has VTable
    // Construct allowed
    // MClassHasEntityLimitedDataDesc
    // MNetworkAssumeNotNetworkable
    // 
    // static metadata: MNetworkVarNames "bool m_bStartRecording"
    // static metadata: MNetworkVarNames "CHandle< CDOTA_BaseNPC> m_hHero"
    // static metadata: MNetworkVarNames "CHandle< CDOTAPlayerController> m_hPlayer"
    #pragma pack(push, 1)
    class CDOTA_Hero_Recorder : public server::CBaseEntity
    {
    public:
        // metadata: MNetworkEnable
        bool m_bStartRecording; // 0x4b8        
        [[maybe_unused]] std::uint8_t pad_0x4b9[0x3]; // 0x4b9
        // metadata: MNetworkEnable
        // m_hHero has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<server::CDOTA_BaseNPC> m_hHero;
        char m_hHero[0x4]; // 0x4bc        
        // metadata: MNetworkEnable
        // m_hPlayer has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<server::CDOTAPlayerController> m_hPlayer;
        char m_hPlayer[0x4]; // 0x4c0        
        entity2::GameTime_t m_flStartRecordingTime; // 0x4c4        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Hero_Recorder because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Hero_Recorder) == 0x4c8);
};
