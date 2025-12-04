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
        // Registered alignment: 0x_
        // Alignment: 0x_
        // Standard-layout class: true
        // Size: 0x_
        // Construct allowed
        // 
        // static metadata: MGetKV3ClassDefaults
        // static metadata: MVDataRoot
        #pragma pack(push, 1)
        class CDOTAMinesweeperGameDefinition
        {
        public:
            source2sdk::client::CDOTAMinesweeperPlayerDefinition m_player; // 0x_            
            // m_vecStages has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<source2sdk::client::CDOTAMinesweeperStageDefinition> m_vecStages;
            char m_vecStages[0x_]; // 0x_            
            float m_flTimeLimit; // 0x_            
            std::int32_t m_nIllusionManaCost; // 0x_            
            std::int32_t m_nStageProgressionTimerIncrease; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            // m_dustEffect has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CResourceNameTyped<CWeakHandle<source2sdk::resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_dustEffect;
            char m_dustEffect[0x_]; // 0x_            
            // m_grassEffect has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CResourceNameTyped<CWeakHandle<source2sdk::resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_grassEffect;
            char m_grassEffect[0x_]; // 0x_            
            // m_explosionEffect has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CResourceNameTyped<CWeakHandle<source2sdk::resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_explosionEffect;
            char m_explosionEffect[0x_]; // 0x_            
            // m_manaPotEffect has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CResourceNameTyped<CWeakHandle<source2sdk::resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_manaPotEffect;
            char m_manaPotEffect[0x_]; // 0x_            
            // m_timerIncreaseEffect has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CResourceNameTyped<CWeakHandle<source2sdk::resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_timerIncreaseEffect;
            char m_timerIncreaseEffect[0x_]; // 0x_            
            // m_illusionEffect has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CResourceNameTyped<CWeakHandle<source2sdk::resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_illusionEffect;
            char m_illusionEffect[0x_]; // 0x_            
            // m_lostManaPotEffect has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CResourceNameTyped<CWeakHandle<source2sdk::resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_lostManaPotEffect;
            char m_lostManaPotEffect[0x_]; // 0x_            
            // m_lostTimerIncreaseEffect has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CResourceNameTyped<CWeakHandle<source2sdk::resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_lostTimerIncreaseEffect;
            char m_lostTimerIncreaseEffect[0x_]; // 0x_            
            std::int32_t m_nManaPotRestoration; // 0x_            
            std::int32_t m_nMaxConcurrentManaPots; // 0x_            
            std::int32_t m_nManaPotExpireClicks; // 0x_            
            std::int32_t m_nManaPotChance; // 0x_            
            float m_flTimeExtension; // 0x_            
            std::int32_t m_nMaxConcurrentTimerIncreases; // 0x_            
            std::int32_t m_nTimerIncreaseExpireClicks; // 0x_            
            std::int32_t m_nTimerIncreaseChance; // 0x_            
            std::int32_t m_nScorePerCellRevealed; // 0x_            
            std::int32_t m_nScorePerStageCleared; // 0x_            
            std::int32_t m_nScorePerSecondsRemaining; // 0x_            
            std::int32_t m_nFailedChordClickTimes; // 0x_            
            std::int32_t m_flFailedChordClickCooldown; // 0x_            
            uint8_t _pad_[0x_];
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::client::CDOTAMinesweeperGameDefinition, m_player) == 0x_);
        static_assert(offsetof(source2sdk::client::CDOTAMinesweeperGameDefinition, m_vecStages) == 0x_);
        static_assert(offsetof(source2sdk::client::CDOTAMinesweeperGameDefinition, m_flTimeLimit) == 0x_);
        static_assert(offsetof(source2sdk::client::CDOTAMinesweeperGameDefinition, m_nIllusionManaCost) == 0x_);
        static_assert(offsetof(source2sdk::client::CDOTAMinesweeperGameDefinition, m_nStageProgressionTimerIncrease) == 0x_);
        static_assert(offsetof(source2sdk::client::CDOTAMinesweeperGameDefinition, m_dustEffect) == 0x_);
        static_assert(offsetof(source2sdk::client::CDOTAMinesweeperGameDefinition, m_grassEffect) == 0x_);
        static_assert(offsetof(source2sdk::client::CDOTAMinesweeperGameDefinition, m_explosionEffect) == 0x_);
        static_assert(offsetof(source2sdk::client::CDOTAMinesweeperGameDefinition, m_manaPotEffect) == 0x_);
        static_assert(offsetof(source2sdk::client::CDOTAMinesweeperGameDefinition, m_timerIncreaseEffect) == 0x_);
        static_assert(offsetof(source2sdk::client::CDOTAMinesweeperGameDefinition, m_illusionEffect) == 0x_);
        static_assert(offsetof(source2sdk::client::CDOTAMinesweeperGameDefinition, m_lostManaPotEffect) == 0x_);
        static_assert(offsetof(source2sdk::client::CDOTAMinesweeperGameDefinition, m_lostTimerIncreaseEffect) == 0x_);
        static_assert(offsetof(source2sdk::client::CDOTAMinesweeperGameDefinition, m_nManaPotRestoration) == 0x_);
        static_assert(offsetof(source2sdk::client::CDOTAMinesweeperGameDefinition, m_nMaxConcurrentManaPots) == 0x_);
        static_assert(offsetof(source2sdk::client::CDOTAMinesweeperGameDefinition, m_nManaPotExpireClicks) == 0x_);
        static_assert(offsetof(source2sdk::client::CDOTAMinesweeperGameDefinition, m_nManaPotChance) == 0x_);
        static_assert(offsetof(source2sdk::client::CDOTAMinesweeperGameDefinition, m_flTimeExtension) == 0x_);
        static_assert(offsetof(source2sdk::client::CDOTAMinesweeperGameDefinition, m_nMaxConcurrentTimerIncreases) == 0x_);
        static_assert(offsetof(source2sdk::client::CDOTAMinesweeperGameDefinition, m_nTimerIncreaseExpireClicks) == 0x_);
        static_assert(offsetof(source2sdk::client::CDOTAMinesweeperGameDefinition, m_nTimerIncreaseChance) == 0x_);
        static_assert(offsetof(source2sdk::client::CDOTAMinesweeperGameDefinition, m_nScorePerCellRevealed) == 0x_);
        static_assert(offsetof(source2sdk::client::CDOTAMinesweeperGameDefinition, m_nScorePerStageCleared) == 0x_);
        static_assert(offsetof(source2sdk::client::CDOTAMinesweeperGameDefinition, m_nScorePerSecondsRemaining) == 0x_);
        static_assert(offsetof(source2sdk::client::CDOTAMinesweeperGameDefinition, m_nFailedChordClickTimes) == 0x_);
        static_assert(offsetof(source2sdk::client::CDOTAMinesweeperGameDefinition, m_flFailedChordClickCooldown) == 0x_);
        
        static_assert(sizeof(source2sdk::client::CDOTAMinesweeperGameDefinition) == 0x_);
    };
};
