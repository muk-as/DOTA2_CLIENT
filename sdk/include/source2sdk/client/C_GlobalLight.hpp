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
    // Registered alignment: 0x10
    // Alignment: 0x10
    // Standard-layout class: false
    // Size: 0xa90
    // Has VTable
    // Construct allowed
    // MNetworkAssumeNotNetworkable
    // 
    // static metadata: MEntityAllowsPortraitWorldSpawn
    #pragma pack(push, 1)
    class C_GlobalLight : public client::C_BaseEntity
    {
    public:
        [[maybe_unused]] std::uint8_t pad_0x538[0x528]; // 0x538
        uint16_t m_WindClothForceHandle; // 0xa60        
        [[maybe_unused]] std::uint8_t pad_0xa62[0x2e];
        
        // Static fields:
        static client::C_GlobalLight* &Get_sm_pGlobalLight() {return *reinterpret_cast<client::C_GlobalLight**>(interfaces::g_schema->FindTypeScopeForModule("client.dll")->FindDeclaredClass("C_GlobalLight")->GetStaticFields()[0]->m_pInstance);};
        static CUtlStringToken &Get_sm_pSkyboxSlots() {return *reinterpret_cast<CUtlStringToken*>(interfaces::g_schema->FindTypeScopeForModule("client.dll")->FindDeclaredClass("C_GlobalLight")->GetStaticFields()[1]->m_pInstance);};
        static CUtlVector<client::C_GlobalLight*> &Get_sm_nonPrimaryGlobalLights() {return *reinterpret_cast<CUtlVector<client::C_GlobalLight*>*>(interfaces::g_schema->FindTypeScopeForModule("client.dll")->FindDeclaredClass("C_GlobalLight")->GetStaticFields()[2]->m_pInstance);};
        
        // Datamap fields:
        // CGlobalLightBase CGlobalLightBase; // 0x540
        // void InputTurnOn; // 0x0
        // void InputTurnOff; // 0x0
        // float InputSetLightScale; // 0x0
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in C_GlobalLight because it is not a standard-layout class
    static_assert(sizeof(C_GlobalLight) == 0xa90);
};
