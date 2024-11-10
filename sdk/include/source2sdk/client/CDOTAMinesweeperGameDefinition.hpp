#pragma once
#include "source2sdk/client/CDOTAMinesweeperPlayerDefinition.hpp"
#include "source2sdk/client/CDOTAMinesweeperStageDefinition.hpp"
#include "source2sdk/resourcesystem/InfoForResourceTypeIParticleSystemDefinition.hpp"
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
    // Standard-layout class: true
    // Size: 0x768
    // Construct allowed
    // 
    // static metadata: MGetKV3ClassDefaults
    // static metadata: MVDataRoot
    #pragma pack(push, 1)
    class CDOTAMinesweeperGameDefinition
    {
    public:
        client::CDOTAMinesweeperPlayerDefinition m_player; // 0x0        
        // m_vecStages has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<client::CDOTAMinesweeperStageDefinition> m_vecStages;
        char m_vecStages[0x18]; // 0x8        
        float m_flTimeLimit; // 0x20        
        int32_t m_nIllusionManaCost; // 0x24        
        int32_t m_nStageProgressionTimerIncrease; // 0x28        
        [[maybe_unused]] std::uint8_t pad_0x2c[0x4]; // 0x2c
        // m_dustEffect has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_dustEffect;
        char m_dustEffect[0xe0]; // 0x30        
        // m_grassEffect has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_grassEffect;
        char m_grassEffect[0xe0]; // 0x110        
        // m_explosionEffect has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_explosionEffect;
        char m_explosionEffect[0xe0]; // 0x1f0        
        // m_manaPotEffect has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_manaPotEffect;
        char m_manaPotEffect[0xe0]; // 0x2d0        
        // m_timerIncreaseEffect has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_timerIncreaseEffect;
        char m_timerIncreaseEffect[0xe0]; // 0x3b0        
        // m_illusionEffect has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_illusionEffect;
        char m_illusionEffect[0xe0]; // 0x490        
        // m_lostManaPotEffect has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_lostManaPotEffect;
        char m_lostManaPotEffect[0xe0]; // 0x570        
        // m_lostTimerIncreaseEffect has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_lostTimerIncreaseEffect;
        char m_lostTimerIncreaseEffect[0xe0]; // 0x650        
        int32_t m_nManaPotRestoration; // 0x730        
        int32_t m_nMaxConcurrentManaPots; // 0x734        
        int32_t m_nManaPotExpireClicks; // 0x738        
        int32_t m_nManaPotChance; // 0x73c        
        float m_flTimeExtension; // 0x740        
        int32_t m_nMaxConcurrentTimerIncreases; // 0x744        
        int32_t m_nTimerIncreaseExpireClicks; // 0x748        
        int32_t m_nTimerIncreaseChance; // 0x74c        
        int32_t m_nScorePerCellRevealed; // 0x750        
        int32_t m_nScorePerStageCleared; // 0x754        
        int32_t m_nScorePerSecondsRemaining; // 0x758        
        int32_t m_nFailedChordClickTimes; // 0x75c        
        int32_t m_flFailedChordClickCooldown; // 0x760        
        [[maybe_unused]] std::uint8_t pad_0x764[0x4];
    };
    #pragma pack(pop)
    
    static_assert(offsetof(CDOTAMinesweeperGameDefinition, m_player) == 0x0);
    static_assert(offsetof(CDOTAMinesweeperGameDefinition, m_vecStages) == 0x8);
    static_assert(offsetof(CDOTAMinesweeperGameDefinition, m_flTimeLimit) == 0x20);
    static_assert(offsetof(CDOTAMinesweeperGameDefinition, m_nIllusionManaCost) == 0x24);
    static_assert(offsetof(CDOTAMinesweeperGameDefinition, m_nStageProgressionTimerIncrease) == 0x28);
    static_assert(offsetof(CDOTAMinesweeperGameDefinition, m_dustEffect) == 0x30);
    static_assert(offsetof(CDOTAMinesweeperGameDefinition, m_grassEffect) == 0x110);
    static_assert(offsetof(CDOTAMinesweeperGameDefinition, m_explosionEffect) == 0x1f0);
    static_assert(offsetof(CDOTAMinesweeperGameDefinition, m_manaPotEffect) == 0x2d0);
    static_assert(offsetof(CDOTAMinesweeperGameDefinition, m_timerIncreaseEffect) == 0x3b0);
    static_assert(offsetof(CDOTAMinesweeperGameDefinition, m_illusionEffect) == 0x490);
    static_assert(offsetof(CDOTAMinesweeperGameDefinition, m_lostManaPotEffect) == 0x570);
    static_assert(offsetof(CDOTAMinesweeperGameDefinition, m_lostTimerIncreaseEffect) == 0x650);
    static_assert(offsetof(CDOTAMinesweeperGameDefinition, m_nManaPotRestoration) == 0x730);
    static_assert(offsetof(CDOTAMinesweeperGameDefinition, m_nMaxConcurrentManaPots) == 0x734);
    static_assert(offsetof(CDOTAMinesweeperGameDefinition, m_nManaPotExpireClicks) == 0x738);
    static_assert(offsetof(CDOTAMinesweeperGameDefinition, m_nManaPotChance) == 0x73c);
    static_assert(offsetof(CDOTAMinesweeperGameDefinition, m_flTimeExtension) == 0x740);
    static_assert(offsetof(CDOTAMinesweeperGameDefinition, m_nMaxConcurrentTimerIncreases) == 0x744);
    static_assert(offsetof(CDOTAMinesweeperGameDefinition, m_nTimerIncreaseExpireClicks) == 0x748);
    static_assert(offsetof(CDOTAMinesweeperGameDefinition, m_nTimerIncreaseChance) == 0x74c);
    static_assert(offsetof(CDOTAMinesweeperGameDefinition, m_nScorePerCellRevealed) == 0x750);
    static_assert(offsetof(CDOTAMinesweeperGameDefinition, m_nScorePerStageCleared) == 0x754);
    static_assert(offsetof(CDOTAMinesweeperGameDefinition, m_nScorePerSecondsRemaining) == 0x758);
    static_assert(offsetof(CDOTAMinesweeperGameDefinition, m_nFailedChordClickTimes) == 0x75c);
    static_assert(offsetof(CDOTAMinesweeperGameDefinition, m_flFailedChordClickCooldown) == 0x760);
    
    static_assert(sizeof(CDOTAMinesweeperGameDefinition) == 0x768);
};
