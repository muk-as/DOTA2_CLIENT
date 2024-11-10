#pragma once
#include "source2sdk/client/C_BaseEntity.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
    class C_DOTAPlayerController;
};

namespace source2sdk::client
{
    class C_DOTA_BaseNPC;
};

namespace source2sdk::client
{
    // Registered alignment: 0x10
    // Alignment: 0x10
    // Standard-layout class: false
    // Size: 0x960
    // Has VTable
    // Construct allowed
    // MClassHasEntityLimitedDataDesc
    // 
    // static metadata: MNetworkVarNames "bool m_bStartRecording"
    // static metadata: MNetworkVarNames "CHandle< C_DOTA_BaseNPC> m_hHero"
    // static metadata: MNetworkVarNames "CHandle< C_DOTAPlayerController> m_hPlayer"
    #pragma pack(push, 1)
    class C_DOTA_Hero_Recorder : public client::C_BaseEntity
    {
    public:
        // metadata: MNetworkEnable
        bool m_bStartRecording; // 0x560        
        [[maybe_unused]] std::uint8_t pad_0x561[0x3]; // 0x561
        // metadata: MNetworkEnable
        // m_hHero has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<client::C_DOTA_BaseNPC> m_hHero;
        char m_hHero[0x4]; // 0x564        
        // metadata: MNetworkEnable
        // m_hPlayer has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<client::C_DOTAPlayerController> m_hPlayer;
        char m_hPlayer[0x4]; // 0x568        
        bool m_bRecording; // 0x56c        
        bool m_bLastStartRecording; // 0x56d        
        [[maybe_unused]] std::uint8_t pad_0x56e[0x2]; // 0x56e
        float m_flLastCycle; // 0x570        
        int32_t m_nCompletedCycles; // 0x574        
        int32_t m_nFramesThisCycle; // 0x578        
        int32_t m_nRecordedFrames; // 0x57c        
        float m_flHeroAdvanceTime; // 0x580        
        float m_flStartTime; // 0x584        
        // m_flCycles has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<float> m_flCycles;
        char m_flCycles[0x18]; // 0x588        
        // m_pBatchFiles has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<CUtlString*> m_pBatchFiles;
        char m_pBatchFiles[0x18]; // 0x5a0        
        [[maybe_unused]] std::uint8_t pad_0x5b8[0x3a8];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in C_DOTA_Hero_Recorder because it is not a standard-layout class
    static_assert(sizeof(C_DOTA_Hero_Recorder) == 0x960);
};
