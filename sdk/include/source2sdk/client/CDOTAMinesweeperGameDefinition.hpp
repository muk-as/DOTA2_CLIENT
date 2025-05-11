#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CDOTAMinesweeperPlayerDefinition.hpp"
#include "source2sdk/client/CDOTAMinesweeperStageDefinition.hpp"
#include "source2sdk/resourcesystem/InfoForResourceTypeIParticleSystemDefinition.hpp"

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
            source2sdk::client::CDOTAMinesweeperPlayerDefinition m_player; // 0x0            
            // m_vecStages has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<source2sdk::client::CDOTAMinesweeperStageDefinition> m_vecStages;
            char m_vecStages[0x18]; // 0x8            
            float m_flTimeLimit; // 0x20            
            std::int32_t m_nIllusionManaCost; // 0x24            
            std::int32_t m_nStageProgressionTimerIncrease; // 0x28            
            uint8_t _pad002c[0x4]; // 0x2c
            // m_dustEffect has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CResourceNameTyped<CWeakHandle<source2sdk::resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_dustEffect;
            char m_dustEffect[0xe0]; // 0x30            
            // m_grassEffect has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CResourceNameTyped<CWeakHandle<source2sdk::resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_grassEffect;
            char m_grassEffect[0xe0]; // 0x110            
            // m_explosionEffect has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CResourceNameTyped<CWeakHandle<source2sdk::resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_explosionEffect;
            char m_explosionEffect[0xe0]; // 0x1f0            
            // m_manaPotEffect has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CResourceNameTyped<CWeakHandle<source2sdk::resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_manaPotEffect;
            char m_manaPotEffect[0xe0]; // 0x2d0            
            // m_timerIncreaseEffect has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CResourceNameTyped<CWeakHandle<source2sdk::resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_timerIncreaseEffect;
            char m_timerIncreaseEffect[0xe0]; // 0x3b0            
            // m_illusionEffect has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CResourceNameTyped<CWeakHandle<source2sdk::resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_illusionEffect;
            char m_illusionEffect[0xe0]; // 0x490            
            // m_lostManaPotEffect has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CResourceNameTyped<CWeakHandle<source2sdk::resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_lostManaPotEffect;
            char m_lostManaPotEffect[0xe0]; // 0x570            
            // m_lostTimerIncreaseEffect has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CResourceNameTyped<CWeakHandle<source2sdk::resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_lostTimerIncreaseEffect;
            char m_lostTimerIncreaseEffect[0xe0]; // 0x650            
            std::int32_t m_nManaPotRestoration; // 0x730            
            std::int32_t m_nMaxConcurrentManaPots; // 0x734            
            std::int32_t m_nManaPotExpireClicks; // 0x738            
            std::int32_t m_nManaPotChance; // 0x73c            
            float m_flTimeExtension; // 0x740            
            std::int32_t m_nMaxConcurrentTimerIncreases; // 0x744            
            std::int32_t m_nTimerIncreaseExpireClicks; // 0x748            
            std::int32_t m_nTimerIncreaseChance; // 0x74c            
            std::int32_t m_nScorePerCellRevealed; // 0x750            
            std::int32_t m_nScorePerStageCleared; // 0x754            
            std::int32_t m_nScorePerSecondsRemaining; // 0x758            
            std::int32_t m_nFailedChordClickTimes; // 0x75c            
            std::int32_t m_flFailedChordClickCooldown; // 0x760            
            uint8_t _pad0764[0x4];
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::client::CDOTAMinesweeperGameDefinition, m_player) == 0x0);
        static_assert(offsetof(source2sdk::client::CDOTAMinesweeperGameDefinition, m_vecStages) == 0x8);
        static_assert(offsetof(source2sdk::client::CDOTAMinesweeperGameDefinition, m_flTimeLimit) == 0x20);
        static_assert(offsetof(source2sdk::client::CDOTAMinesweeperGameDefinition, m_nIllusionManaCost) == 0x24);
        static_assert(offsetof(source2sdk::client::CDOTAMinesweeperGameDefinition, m_nStageProgressionTimerIncrease) == 0x28);
        static_assert(offsetof(source2sdk::client::CDOTAMinesweeperGameDefinition, m_dustEffect) == 0x30);
        static_assert(offsetof(source2sdk::client::CDOTAMinesweeperGameDefinition, m_grassEffect) == 0x110);
        static_assert(offsetof(source2sdk::client::CDOTAMinesweeperGameDefinition, m_explosionEffect) == 0x1f0);
        static_assert(offsetof(source2sdk::client::CDOTAMinesweeperGameDefinition, m_manaPotEffect) == 0x2d0);
        static_assert(offsetof(source2sdk::client::CDOTAMinesweeperGameDefinition, m_timerIncreaseEffect) == 0x3b0);
        static_assert(offsetof(source2sdk::client::CDOTAMinesweeperGameDefinition, m_illusionEffect) == 0x490);
        static_assert(offsetof(source2sdk::client::CDOTAMinesweeperGameDefinition, m_lostManaPotEffect) == 0x570);
        static_assert(offsetof(source2sdk::client::CDOTAMinesweeperGameDefinition, m_lostTimerIncreaseEffect) == 0x650);
        static_assert(offsetof(source2sdk::client::CDOTAMinesweeperGameDefinition, m_nManaPotRestoration) == 0x730);
        static_assert(offsetof(source2sdk::client::CDOTAMinesweeperGameDefinition, m_nMaxConcurrentManaPots) == 0x734);
        static_assert(offsetof(source2sdk::client::CDOTAMinesweeperGameDefinition, m_nManaPotExpireClicks) == 0x738);
        static_assert(offsetof(source2sdk::client::CDOTAMinesweeperGameDefinition, m_nManaPotChance) == 0x73c);
        static_assert(offsetof(source2sdk::client::CDOTAMinesweeperGameDefinition, m_flTimeExtension) == 0x740);
        static_assert(offsetof(source2sdk::client::CDOTAMinesweeperGameDefinition, m_nMaxConcurrentTimerIncreases) == 0x744);
        static_assert(offsetof(source2sdk::client::CDOTAMinesweeperGameDefinition, m_nTimerIncreaseExpireClicks) == 0x748);
        static_assert(offsetof(source2sdk::client::CDOTAMinesweeperGameDefinition, m_nTimerIncreaseChance) == 0x74c);
        static_assert(offsetof(source2sdk::client::CDOTAMinesweeperGameDefinition, m_nScorePerCellRevealed) == 0x750);
        static_assert(offsetof(source2sdk::client::CDOTAMinesweeperGameDefinition, m_nScorePerStageCleared) == 0x754);
        static_assert(offsetof(source2sdk::client::CDOTAMinesweeperGameDefinition, m_nScorePerSecondsRemaining) == 0x758);
        static_assert(offsetof(source2sdk::client::CDOTAMinesweeperGameDefinition, m_nFailedChordClickTimes) == 0x75c);
        static_assert(offsetof(source2sdk::client::CDOTAMinesweeperGameDefinition, m_flFailedChordClickCooldown) == 0x760);
        
        static_assert(sizeof(source2sdk::client::CDOTAMinesweeperGameDefinition) == 0x768);
    };
};
