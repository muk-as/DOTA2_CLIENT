#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/EntityDisolveType_t.hpp"
#include "source2sdk/entity2/GameTime_t.hpp"
#include "source2sdk/server/CBaseModelEntity.hpp"

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace server
    {
        // Registered alignment: 0x8
        // Alignment: 0x8
        // Standard-layout class: false
        // Size: 0x820
        // Has VTable
        // Construct allowed
        // 
        // static metadata: MNetworkVarNames "float32 m_flFadeInStart"
        // static metadata: MNetworkVarNames "float32 m_flFadeInLength"
        // static metadata: MNetworkVarNames "float32 m_flFadeOutModelStart"
        // static metadata: MNetworkVarNames "float32 m_flFadeOutModelLength"
        // static metadata: MNetworkVarNames "float32 m_flFadeOutStart"
        // static metadata: MNetworkVarNames "float32 m_flFadeOutLength"
        // static metadata: MNetworkVarNames "GameTime_t m_flStartTime"
        // static metadata: MNetworkVarNames "EntityDisolveType_t m_nDissolveType"
        // static metadata: MNetworkVarNames "Vector m_vDissolverOrigin"
        // static metadata: MNetworkVarNames "uint32 m_nMagnitude"
        #pragma pack(push, 1)
        class CEntityDissolve : public source2sdk::server::CBaseModelEntity
        {
        public:
            // metadata: MNetworkEnable
            float m_flFadeInStart; // 0x7f0            
            // metadata: MNetworkEnable
            float m_flFadeInLength; // 0x7f4            
            // metadata: MNetworkEnable
            float m_flFadeOutModelStart; // 0x7f8            
            // metadata: MNetworkEnable
            float m_flFadeOutModelLength; // 0x7fc            
            // metadata: MNetworkEnable
            float m_flFadeOutStart; // 0x800            
            // metadata: MNetworkEnable
            float m_flFadeOutLength; // 0x804            
            // metadata: MNetworkEnable
            source2sdk::entity2::GameTime_t m_flStartTime; // 0x808            
            // metadata: MNetworkEnable
            source2sdk::client::EntityDisolveType_t m_nDissolveType; // 0x80c            
            // metadata: MNetworkEnable
            Vector m_vDissolverOrigin; // 0x810            
            // metadata: MNetworkEnable
            std::uint32_t m_nMagnitude; // 0x81c            
            
            // Datamap fields:
            // void CEntityDissolveDissolveThink; // 0x0
            // void CEntityDissolveElectrocuteThink; // 0x0
            // CUtlSymbolLarge InputDissolve; // 0x0
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CEntityDissolve because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CEntityDissolve) == 0x820);
    };
};
